/*std::vector
Преимущества :

Континуум памяти : std::vector хранит элементы в непрерывном блоке памяти, 
что обеспечивает быстрый доступ по индексу(O(1)).
Компактность : Континууальность памяти делает std::vector более компактным, 
поскольку отсутствуют дополнительные указатели, которые характерны для 
двусвязных списков.

Быстрые операции в конце : Добавление элементов в конец вектора(push_back) 
происходит быстро, хотя может потребоваться увеличение памяти при расширении
(в случае увеличения емкости).

Возможности для оптимизации : Векторы хорошо работают с кэшем процессора, 
что может улучшить производительность при итерациях и других операциях.

Недостатки :
Медленные операции вставки / удаления в середине или в начале : При вставке 
или удалении элементов в начале или середине вектора элементы могут смещаться, 
что приводит к высокой временной сложности(O(n)).
Потенциальное увеличение памяти : При расширении вектор может выделить 
дополнительную память, что может привести к использованию большего объема памяти, чем изначально требуется.*/

/*std::list
Преимущества :

Быстрые операции вставки / удаления в середине или начале : Вставка и 
удаление элементов в списке выполняется за O(1), поскольку список 
содержит указатели на предыдущий и следующий элементы.
Стабильность итераторов : Итераторы в списках остаются действительными 
даже при добавлении или удалении элементов(за исключением случаев удаления 
самого элемента, на который указывает итератор).
Гибкость : Списки подходят для сценариев, где нужно часто добавлять или 
удалять элементы из середины структуры данных.

Недостатки :
Отсутствие прямого доступа : В списке нельзя использовать индексы для 
доступа к элементам, так как для этого приходится проходить через все элементы до нужного.
Больше памяти на элемент : Каждый элемент списка содержит дополнительные 
указатели, что делает список менее компактным, чем вектор.
Низкая эффективность кэширования : Из - за распределенной памяти списки 
могут хуже работать с кэшем процессора, что снижает производительность при итерациях.
*/

/*итог:
std::vector предпочтителен, когда требуется быстрый доступ по индексу, и 
операции вставки / удаления происходят в конце.Он подходит для массивов 
переменного размера, динамических списков и других случаев, где требуется 
последовательный доступ.
std::list предпочтителен, когда необходимо часто вставлять или удалять 
элементы в середине или в начале, а также когда требуется стабильность 
итераторов.Это может быть полезно для очередей, двусвязных списков, 
реализации хэш - таблиц и других сценариев, требующих гибкости структуры данных.*/
	