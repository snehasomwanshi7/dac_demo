package com.agro.com.controller;

import java.util.List;

import javax.mail.MessagingException;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.agro.com.model.User;

import com.agro.com.service.UserService;


//User Controller

@RestController
@CrossOrigin(origins = "*")
@RequestMapping("/api/v1")
public class UserController {

	@Autowired
	private UserService usrService;
//	
	
	@PostMapping("/sendMail")
	public boolean sendMail(@RequestBody User usr) throws MessagingException
	{
		return usrService.sendMailToWinn(usr);
		
	}
	
	
	

	@GetMapping("/GetUsers")
	public List<User> getUsers()
	{
		return usrService.getAllUsers();
	}
	
	//getuserbyid
	@GetMapping("/GetUser")
	public List<User> getUser(@RequestBody User usr)
	{
		return usrService.getUserById(usr.getId());
	}
	
	
	
	@PostMapping("/addusr")
	public String addUser(@RequestBody User usr)
	{
		return usrService.addUserData(usr);
		
	}
	
	@PostMapping("/validateUser")
	public List<User> verifyUser(@RequestBody User usr)
	{	
		return usrService.validateUser(usr.getEmail(),usr.getPassword());	
	}
	
	@PostMapping("/validateUserEmail")
	public boolean verifyEmail(@RequestBody User usr)
	{
		
		return	usrService.verifyUserEmail(usr.getEmail())	;

	}
	
	@PostMapping("/forgetpassword")
	public boolean forgetPass(@RequestBody User usr)
	{
	int res=usrService.resetPass(usr.getEmail(),usr.getPassword());
		if(res==0) 
		{
			return false;
		}else
		{
			return true;
		}
	}
	
	@GetMapping("/GetUserProfile")
	public List<User> getUserProfile(@RequestParam String email)
	{
		return usrService.getUserByEmail(email);
	}
	
	
//	/api/v1/GetUserByEmailId
	@PostMapping("/GetUserByEmailId")
	public List<User> getUserByEmail(@RequestBody User usr)
	{
		return usrService.getUserByEmail(usr.getEmail());
	}
	
	@GetMapping("/GetFBUsers")
	public List<User> getFBUsers()
	{
		return usrService.getUsers();
	}
	
	@GetMapping("/delFBUsers")
	public void delFBUsers(@RequestParam long id)
	{
		usrService.delUsers(id);
	}
	
	
}
