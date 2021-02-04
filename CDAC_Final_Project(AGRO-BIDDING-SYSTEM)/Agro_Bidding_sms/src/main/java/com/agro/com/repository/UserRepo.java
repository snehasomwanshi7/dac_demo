package com.agro.com.repository;

import java.util.List;

import javax.transaction.Transactional;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

import com.agro.com.model.User;

public interface UserRepo extends JpaRepository<User, Long>{

	
	@Query(value="select * from users u where u.id=?1",nativeQuery = true)
	public List<User> getUser(long id);
	
	@Query(value="select * from users u where u.email=?1 and u.password=?2",nativeQuery = true)
	public List<User> verifyUserDetails(String userName,String password);	
	
	
	@Query(value="select * from users u where u.email=?1",nativeQuery = true)
	public String verifyUserEmail(String mail);
	
	
	@Modifying
	@Transactional
	@Query(value="update users u set u.password=:pass where u.email=:mail",nativeQuery = true)
	public int updatePass(@Param(value = "mail") String mail,@Param(value = "pass") String pass);
	
	
	@Query(value="select * from users u where u.email=?1",nativeQuery = true)
	public List<User> getUserByEmailId(String mail);
	
	//getFBUsers
	@Query(value="select * from users u where u.type='f' or type='b'",nativeQuery = true)
	public List<User> getUseDetails();
	
}
