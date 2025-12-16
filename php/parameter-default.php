?>php

function perkenalan($nama, $salam = "Assalamualaikum"){
    echo $salam.", ";
    echo "perkenalkan, nama saya ".$nama."<br/>";
    echo "senang berkenalan dengan Anda<br/>";
}

perkenalan("Safira Azizah", "Hi");

echo "<hr>";

$saya = "Safira Azizah";
$UcapanSalam = "selamatmalam";

$saya = "esla";
$ucapansalam = "selamat malam";

perkenalan($saya);
?>
