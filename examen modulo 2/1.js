



document.addEventListener('DOMContentLoaded', () => {
    const form = document.querySelector('.formulario');
    const contenedor = document.querySelector('.contenedor-principal');

    form.addEventListener('submit', (e) => {
        e.preventDefault(); // Detiene el envío normal del formulario

        // 1. Aplica la clase de animación de salida
        contenedor.classList.add('animacion-salida');

        // 2. Espera a que termine la animación (0.8 segundos) y luego haz lo que sea necesario
        setTimeout(() => {
            // Aquí puedes redirigir al usuario o mostrar un mensaje de éxito.
            alert("¡Formulario enviado! La animación de salida ha terminado.");
            // Ejemplo de redirección: window.location.href = 'otra_pagina.html';
        }, 800); // 800 milisegundos = duración de la animación en CSS
    });
});





















