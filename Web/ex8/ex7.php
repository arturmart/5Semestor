<?php

//var_dump($_POST);



$data = $_POST;

//echo json_encode($data);

$myfile = fopen("temp.txt", "r") or die("Unable to open file!");
// Output one line until end-of-file
while(!feof($myfile)) {
  $localData =  json_decode( fgets($myfile));
  echo $localData;
}
fclose($myfile);

/*

$myfile = fopen("temp.txt", "a") or die("Unable to open file!");

fwrite($myfile, json_encode($data));

fclose($myfile);
*/


/*$data = ['name'];

if ($data) {

    $name = $data['name'];
    $email = $data['email'];

    $response = array(
        "status" => "success",
        "message" => "Data received successfully",
        "name" => $name,
        "email" => $email
    );

    echo json_encode($response);
    
} else {
    echo json_encode(array("status" => "error", "message" => "Invalid data"));
}*/

?>