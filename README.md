# diplom
Тема моей дипломной работы: "Распознавание пороков на поверхности ткани".
Программа разрабатывается для нахождения неоднородностей (пороков) на поверхности ткани.
Планируется переход на нейросеть.
На данный момент программа имеет следующие основные возможности:
  -Генерировать геометрические фигуры
    Генерирует геометрические фигуры для обучающей выборки.
  -Делать исходное изображение чёрнобелым
  -Размывать изображение (требуется openCV)
    Используется Гауссово размытие
  -Пулинг изображения
    Уменьшает исходное изображения в 2 раза(габариты изображения должны быть чётными (планируется сделать работу с чётными и нечётными размерами))
  -Запись/загрузка в/из файла значения матрицы среднего значения на пиксель
  -Генерация изображения на основании матрицы среднего значения на пиксель
    Изображение будет чёрнобелым
  -Находить неоднородности на изображении
    Реализовано 2 способа:
      -Сравнение каждого пикселя изображения образца с пикселем проверяемого изображения.
      -Сранение каждого пикселя наложенных друг на друга изображений образца с пикселем проверяемого изображения (более правильный и разумный подход по моему мнению).

========================================================================================================================================

The theme of my thesis: "Recognition of defects on the surface of tissue."
The program is designed to find heterogeneities (defects) on the surface of the tissue.
It is planned to switch to a neural network.
At the moment the program has the following main features:
  -Generation geometric shapes
    Generates geometric shapes for the training sample.
  -Do the original image in black and white
  -Blur image (requires openCV)
    Gaussian blur is used
  -Pooling of the image
    Reduces the original image by 2 times (the image dimensions should be even (it is planned to do work with even and odd dimensions))
  -Recording/loading in/from the file the value of the matrix of the mean value per pixel
  -Generation of the image based on the matrix of the mean value per pixel
    Image will be black and white
  - Find the heterogeneity in the image
    There are 2 ways:
      -Compare each pixel of the sample image with the pixel of the image being checked.
      -Discover of each pixel of superimposed images of the sample with the pixel of the image being checked (a more correct and reasonable approach in my opinion).
