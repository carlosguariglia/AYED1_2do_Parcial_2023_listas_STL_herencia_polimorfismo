
# incluyendo todos los .cpp que haya en ./src
g++ -I./include main.cpp ./src/*.cpp -o app.bin  

# Permiso de ejecucion a app.bin
chmod +x app.bin

# Ejecutando app.bin
./app.bin

# Luego de ejecutar app.bin se elimina el archivo binario (esto es para evitar que al modificar el codigo y 
# de error en la compilacion no ejecute un app.bin de una compilacion anterior SOLO UTIL EN LA PARTE DE PRUEBAS)
# rm app.bin      