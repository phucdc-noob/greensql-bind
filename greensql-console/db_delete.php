<?php
require_once 'lib.php';

global $demo_version;
global $smarty;

$msg = "";
$error = "";

$smarty->assign("PrimaryMenu", get_primary_menu());
$smarty->assign("SecondaryMenu", get_top_db_menu());

$db_id = 0;
if (isset($_REQUEST['db_id']))
{
    $db_id = abs(intval($_REQUEST['db_id']));
}
$db  = get_database($db_id);

#if (isset($_REQUEST['submit']) && $_REQUEST['submit'] == 'delete' && 
#    isset($_REQUEST['confirm']) && $_REQUEST['confirm'] == 'on' && $db)
if (isset($_POST['delete']))
{
    if ($db['sysdbtype'] != 'user_db')
    {
        $error .= "Default database can not be deleted.<br/>\n";
		} else if ($demo_version) {
				$error .= "You can not delete database in the demo mode.<br/>\n";
    } else {
        $error = delete_database($db_id);
    }

    if ($error) {
        $msg = "<font color='red'>$error</font>";
    }
    $_SESSION['msg'] = $msg;
    header("location: db_list.php?$tokenname=$tokenid");
} else {
    $msg = "<font color='red'>Failed to delete database ".$db['dbname']."</font>";
}
$smarty->assign("Page","delete.tpl");
$smarty->assign("DB_Name",$db['db_name']);
$smarty->assign("Type","database");
$smarty->display('index.tpl');  
#$_SESSION['msg'] = $msg;
#header("location: db_list.php?$tokenname=$tokenid");
?>

