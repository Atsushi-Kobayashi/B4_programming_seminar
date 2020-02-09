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
//	//Factory���������card_factory�������Ă��܂�
//
//	system("pause");
//	return 0;
//}


//ctrl+(K��U)�ŃR�����g�͂����@
//unique_ptr�F�|�C���^�̏��L�҂���Ɍ��߂�
//���L�҂�������ƃ���������������idelete���Ȃ��Ă悢�j
//shared_ptr�F���L�҂���������C�S���L�҂����������Ƀ������������
//�����̏��L�҂�����l�𗘗p���邪�C���L�҂��ǂ̏��Ԃŏ����邩�킩��Ȃ��ꍇ
//�@��shared�ɂ��Ƃ��ƁC�S�����������ɓ��������ł���

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
		 //move:���j�[�N�|�C���^�̏��L�����n
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