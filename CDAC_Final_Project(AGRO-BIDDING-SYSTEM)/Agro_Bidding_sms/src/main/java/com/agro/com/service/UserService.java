package com.agro.com.service;

import java.util.List;


import javax.mail.internet.MimeMessage;
import javax.transaction.Transactional;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.mail.javamail.JavaMailSender;
import org.springframework.mail.javamail.MimeMessageHelper;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.RequestBody;
import com.agro.com.model.User;
import com.agro.com.repository.UserRepo;

@Service
@Transactional
public class UserService {

	@Autowired
	private UserRepo usrRepo;
	

	
	@Autowired
	JavaMailSender javaMailSender;
	
	public List<User> getAllUsers()
	{
	
		return usrRepo.findAll();
	}
	
	
	public List<User> getUserById(long id)
	{
		return usrRepo.getUser(id);
	}
	
	public String addUserData(User usr)
	{
		usrRepo.save(usr);
		return "success.....";
	}
	
	
	public List<User> validateUser( String email,String pass)
	{	
		return usrRepo.verifyUserDetails(email,pass);	
	}
	
	
	public boolean verifyUserEmail(String email)
	{
		String str=	usrRepo.verifyUserEmail(email)	;
		
		if(str != null)
		{   												
			String[] arr = str.split(","); 
			  
		    if(arr[3] != "")
		    {
		    	return true;
		    }
		}
			
			return false;
	}
	
	
	
	public int resetPass(String email,String pass)
	{
		
		return  usrRepo.updatePass( email,pass);
	}
	
	public List<User> getUserByEmail(String email)
	{
		return  usrRepo.getUserByEmailId(email);
	}
	
	
	
	public boolean sendMailToWinn(@RequestBody User usr)
	{
		try {
		
			 MimeMessage message = javaMailSender.createMimeMessage();
			
			 MimeMessageHelper helper;
			 
			 helper = new MimeMessageHelper(message, true); // true indicates
			 
	         helper.setSubject("You Won the Bid");
	         helper.setTo("pkalpesh1996@gmail.com");
	         helper.setText(usr.toString(), true); // true indicates html
	// continue using helper object for more functionalities like adding attachments, etc.  

	         javaMailSender.send(message);
	         return true;
		}catch (Exception e) {
			e.printStackTrace();
			return false;
		}
	}
	
	
	//getFbUsers
	public List<User> getUsers()
	{
		return usrRepo.getUseDetails();
	}
	
	public void delUsers(long id)
	{
		 usrRepo.deleteById(id);
	}
	
}
