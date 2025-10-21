
<?php


for ($i = 1; $i <= 30; $i++) {
    $out = '';
    if ($i % 3 === 0) $out .= 'Mar';
    if ($i % 5 === 0) $out .= 'Tierra';
    echo ($out !== '' ? $out : $i) . PHP_EOL;
}




