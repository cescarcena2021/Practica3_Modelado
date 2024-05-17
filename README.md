# Practica 3 Modelado

## Objetivos 🎯​

### Parte 🅰️​
Configurar correctamente el modelo de robot utilizado en la práctica 2 (el que se realizo en Blender) para poder ser visualizado, operado y controlado usando el
software disponible en ROS2.

### Parte 🅱️
Realizar la simulación en dos entornos de gazebo diferentes usando el robot realizado en la práctica 2 para estudiar el comportamiento del robot y su modelo de colisión en
mundos distintos.

## Comparativa de graficas 

### Velocidades de los joitns

En estas primeras dos graficas podemos ver como las velociades son practicamente iguales ya que se comandan desde el mismo nodo el cual se mantiene igual en ambos casos. Como punto a destacra es que que se se cumple con las especificaciones de la practica, la ruedas de un lado deben girar en sentiodo opuesto a las del otro por como estan definidos sus ejes. Es por ello que en la grafica esxiten 2 valores negativos y 2 positivos.

#### Floor
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/03d04934-f173-46b3-a504-6250a563a87f)

#### Sand
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/95a9bb45-d88d-4181-b486-8405068ec0a5)

### Desplazamiento de la odometria

En estas graficas podemos ver el desplazamiento del robot en los 3 ejes de cordenadas. Como es obvio el eje z se mantiene constante ya que la simulacion se ha hecho en un escenario plano.
#### Floor
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/0d1fea13-f73a-4aca-866c-20a8094ab211)

#### Sand
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/73a39fd1-b39a-4214-975a-b48e72e8ee1b)

### Aceleracion del sensor inercial

En estas graficas podemos observar la acelarion en el eje x que nos proporciona el sensor inercia. En estas graficas podemos notar mas direfencias que en las anteriores ya qua que aqui el pavimento si juega un gran papel.
#### Floor
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/f2cfda48-1b02-4d82-906f-0781dee214ee)

#### Sand
![image](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/500a971f-6376-44c3-8c84-ceafe3de216a)

## Videos demostrativo

En este apartado veremos las dos demostraciones, con los dos tipos de pavimento distinto. Como se puede apreciar no exiten apenas diferencias entre ellos, de ahi que las graficas salgan bastante parecidas.

### Prueba en mundo "floor"

Carpeta con el contenido del rosbag obtenido en esta [simulacion](https://github.com/cescarcena2021/Practica3_Modelado/tree/main/gwagon_floor).

[Ejemplo en el suelo](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/c2b64081-4bb1-4084-ae13-2e4cbb6e8a9f)

### Prueba en mundo "sand"

Carpeta con el contenido del rosbag obtenido en esta [simulacion](https://github.com/cescarcena2021/Practica3_Modelado/tree/main/gwagon_sand).

[Ejemplo en la arena](https://github.com/cescarcena2021/Practica3_Modelado/assets/102520602/769a0915-667f-44dd-8814-491d7d9d832f)



