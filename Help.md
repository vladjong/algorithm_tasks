# GO
Для чтения входных данных необходимо получить их из стандартного потока ввода.
Данные во входном потоке соответствуют описанному в условии формату. Обычно входные данные состоят из нескольких строк.
Можно использовать несколько методов:
* fmt.Scanln(), fmt.Scan(), fmt.Scanf() -- функции, позволяющие считывать отдельные слова в отдельные переменные;
* bufio.Reader -- позволяет читать строку входного текста или один символ;
* bufio.Scanner -- предоставляет удобный интерфейс для чтения строк текста.
Чтобы прочитать из строки стандартного потока:
* число:
```go
var number int64
if _, err := fmt.Scan(&number); err != nil {
  log.Fatal(err)
}
```
* строку:
```go
scanner := bufio.NewScanner(os.Stdin)
scanner.Scan()
if err := scanner.Err(); err != nil {
  log.Fatal(err)
}
```
* массив чисел известной длины:
```go
var arr = make([]int, 10)
for i := 0; i < len(arr); i++ {
  if _, err := fmt.Scan(&arr[i]); err != nil {
    log.Fatal(err)
  }
}
```
* последовательность слов до конца файла:
```go
scanner := bufio.NewScanner(os.Stdin)
scanner.Split(bufio.ScanWords)
var words []string
for scanner.Scan() {
  words = append(words, scanner.Text())
}
```
Чтобы вывести результат в стандартный поток вывода,
можно использовать fmt.Println() или fmt.Print().
Пример:
Возможное решение задачи "Вычислите сумму A+B":
```go
var a, b int64
_, err := fmt.Scan(&a)
if err != nil {
  log.Fatal(err)
}
if _, err = fmt.Scan(&b); err != nil {
  log.Fatal(err)
}
fmt.Println(a + b)
```
