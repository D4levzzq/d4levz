


3️⃣ Juego: Adivina el Número
🎯 Desarrolla un programa que simule un juego de "adivina el número". Define una variable
 con un número secreto y utiliza un bucle while para intentar adivinarlo,
 incrementando un contador hasta encontrarlo. Muestra cada intento.
<?php
$secreto = 42; // número secreto (modifica si quieres)
$intentos = 0;

echo "Adivina el número secreto. Escribe un número y pulsa Enter:" . PHP_EOL;

while (true) {
    if (function_exists('readline')) {
        $line = readline("> ");
    } else {
       
        
        echo "> ";
        $line = fgets(STDIN);
    }

    if ($line === false) {
        echo "No se recibió entrada. Saliendo." . PHP_EOL;
        break;
    }

    $intento = intval(trim($line));
    $intentos++;

    echo "Intento {$intentos}: {$intento}" . PHP_EOL;

    if ($intento === $secreto) {
        echo "¡Correcto! Encontrado en {$intentos} intento" . ($intentos > 1 ? "s" : "") . "." . PHP_EOL;
        break;
    } elseif ($intento < $secreto) {
        echo "Demasiado bajo. Intenta de nuevo." . PHP_EOL;
    } else {
        echo "Demasiado alto. Intenta de nuevo." . PHP_EOL;
    }
}

<?




