<?php
//-------------------:MY_SQL DEFINES LIST:------------------
//----------------------------------------------------------
	DEFINE('sql_pass', 'thefabs4', true);
	DEFINE('sql_user', 'a1807453_db', true);
	DEFINE('sql_host', 'mysql13.000webhost.com', true);
	DEFINE('sql_db', 'a1807453_db', true);
	DEFINE('TEXT', 'Hello World');
	
	echo "It works";
//----------------------------------------------------------
//----------------------------------------------------------

//==========================================================

if (!($mylink = mysql_connect( 'sql_host', 'sql_users', 'sql_pass'))){
	echo  "<h3>Sorry, could not connect to database.</h3><br/>
	Please contact your system's admin for more help\n";
	exit;
}

mysql_select_db( 'sql_host' );

//==========================================================

//---------------:SERVER_VARIABLES LIST:--------------------
//----------------------------------------------------------

$self = $_SERVER['PHP_SELF'];
?>