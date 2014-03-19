<?php
	//----------------------------------------------//
	//--------------SQL_CONNECTION_DEFS-------------//
	//----------------------------------------------//
	define('HOST', 'localhost', true);
	define('DB', 'fabtab', true);
	define('USER', 'root', true);
	define('PASS', '', true);
	
	if(!$conn = mysql_connect(HOST, USER, PASS)){
		echo mysql_error();
	}elseif($conn = mysql_connect(HOST, USER, PASS)){
		$select = mysql_select_db(DB) or die(mysql_error());
	}
	
?>