Исследование проводилось на машине:
Model Name:	MacBook Pro
Model Identifier: A2298
Chip:	Intel Core i5
Total Number of Cores: 4
Memory:	8 GB
System Firmware Version:	Venture 13.2


|                      | 10 запусков | 100 запусков | 1000 запусков | Усредненное время работы 1 запуска |
| -------------------- | ----------- | ------------ | ------------- | ---------------------------------- |
| Матричный перцептрон | 559сек.     | 5554сек.     | 55438сек.     | 55сек.                             |
| -------------------- | ----------- | ------------ | ------------- | ---------------------------------- |
| Графовый перцептрон  | 556сек.     | 5528сек.     | 55142сек.     | 55сек.                             |
| -------------------- | ----------- | ------------ | ------------- | ---------------------------------- |

Исследование показало, что не смотря на то, что графовый перцептрон отрабатывает несколько быстрее матричного, но в итоге их усредненное время работы идентично.