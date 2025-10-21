

4️⃣ Suma de Impares del 1 al 100
➕ Escribe un script que calcule la suma de todos los números impares desde el 1 hasta el 100.

<?php



$sum = 0;
for ($i = 1; $i <= 100; $i += 2) {
    $sum += $i;
}

echo "Suma de impares entre 1 y 100: {$sum}" . PHP_EOL;
