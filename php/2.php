


1️⃣ Contador de Pares e Impares
🔢 Escribe un script que cuente y muestre la cantidad de números pares e impares que hay en el rango del 1 al 50.

<?php
// ...existing code...


$inicio = 1;
$fin = 50;

$pares = 0;
$impares = 0;

for ($i = $inicio; $i <= $fin; $i++) {
    if ($i % 2 == 0) {
        $pares++;
    } else {

        $impares++;
    }
}


echo "Cantidad de pares entre {$inicio} y {$fin}: {$pares}" . PHP_EOL;
echo "Cantidad de impares entre {$inicio} y {$fin}: {$impares}" . PHP_EOL;

