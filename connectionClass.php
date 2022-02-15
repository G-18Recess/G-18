<?php
class connectionClass extends mysqli{

    private $host="localhost",$password="",$username="root",$dbname="recess";
    public $con;
    function _construct(){
        $this->con= $this->connect($this->host, $this->username, $this->password, $this->dbname);
    }
}