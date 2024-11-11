<?php
// Read the raw POST data
$data = json_decode(file_get_contents("php://input"), true);

// Check if the data is received correctly
if ($data) {
    // Extract values from the JSON object
    $name = $data['name'];
    $email = $data['email'];

    // Here you can process the data (e.g., save to database, etc.)
    // For now, let's just return a response

    $response = array(
        "status" => "success",
        "message" => "Data received successfully",
        "name" => $name,
        "email" => $email
    );

    // Return the response as JSON
    echo json_encode($response);
} else {
    // If the data is not valid
    echo json_encode(array("status" => "error", "message" => "Invalid data"));
}
?>