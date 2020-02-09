//#include <iostream>
//#include <random>
//#include <memory>
//
//std::random_device seed_gen;
//std::mt19937 engine(seed_gen());
//std::uniform_int_distribution<int> dist(1, 13);
//
//class RandomIntFactory
//{
//public:
//	RandomIntFactory() : m_int_ptr(nullptr) {};
//	~RandomIntFactory()
//	{
//		delete m_int_ptr;
//	};
//
//	int* createInt()
//	{
//		m_int_ptr = new int;
//		*m_int_ptr = dist(engine);
//		return m_int_ptr;
//	}
//
//private:
//	int *m_int_ptr;
//};
//
//int main()
//{
//	RandomIntFactory* card_factory = new RandomIntFactory();
//	int *card_num_ptr = card_factory->createInt();
//
//	std::cout << *card_num_ptr << "\n";
//
//	delete card_factory;
//
//	std::cout << *card_num_ptr << "\n";
//	//Factoryが消えるとcard_factoryも消えてしまう
//
//	system("pause");
//	return 0;
//}


//ctrl+(K→U)でコメントはずし　
//unique_ptr：ポインタの所有者を一つに決める
//所有者が消えるとメモリが解放される（deleteしなくてよい）
//shared_ptr：所有者が複数いる，全所有者が消えた時にメモリ自動解放
//複数の所有者がある値を利用するが，所有者がどの順番で消えるかわからない場合
//　→sharedにしとくと，全員消えた時に同時消去できる

 #include <iostream>
 #include <random>
 #include <memory>

 std::random_device seed_gen;
 std::mt19937 engine(seed_gen());
 std::uniform_int_distribution<int> dist(1, 13);

 class RandomIntFactory
 {
 public:
     RandomIntFactory(): m_int_ptr(){};
     ~RandomIntFactory(){};

     std::unique_ptr<int> createInt()
     {
         m_int_ptr = std::make_unique<int>(dist(engine));
         //return m_int_ptr;
         return std::move(m_int_ptr);
		 //move:ユニークポインタの所有権譲渡
     }

     void checkPtr()
     {
         if(m_int_ptr)
         {
             std::cout << "has value\n";
         }
         else
         {
             std::cout << "nullptr\n";
         }
     }

 private:
     std::unique_ptr<int> m_int_ptr;
 };

 int main()
 {
     RandomIntFactory* card_factory = new RandomIntFactory();
     std::unique_ptr<int> card_num_ptr = card_factory->createInt();
     // card_factory->checkPtr();

     std::cout << *card_num_ptr.get() << "\n";

     delete card_factory;

     std::cout << *card_num_ptr.get() << "\n";
	 system("pause");
	 return 0;
 }