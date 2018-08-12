//#include <boost/multi_index_container.hpp>
//#include <boost/multi_index/member.hpp>
//#include <boost/multi_index/ordered_index.hpp>
//#include <iostream>
//#include <string.h>

//using namespace boost;
//using namespace std;

//#define GRAPHENE_DB_MAX_INSTANCE_ID  (uint64_t(-1)>>16)

//struct Student
//{
//    Student(int i,string n,int a)
//    {
//        id = i;
//        name = n;
//        age = a;
//    }
//    friend std::ostream& operator<<(std::ostream& os,const Student& a)
//    {
//        os << "id:" << a.id << ",name:" << a.name << ",age:"<<a.age << std::endl;
//        return os;
//    }
//    int id;
//    string name;
//    int age;
//};

//typedef boost::multi_index_container<Student,boost::multi_index::indexed_by<
//        boost::multi_index::ordered_unique<boost::multi_index::member<Student,int,&Student::id>>,//id唯一
//        boost::multi_index::ordered_unique<boost::multi_index::member<Student,string,&Student::name>>,
//        boost::multi_index::ordered_non_unique<boost::multi_index::member<Student,int,&Student::age>>//age允许不唯一
//        >
//        > StudentContainer;

//typedef StudentContainer::nth_index<0>::type IdIndex;
//typedef StudentContainer::nth_index<1>::type NameIndex;
//typedef StudentContainer::nth_index<2>::type AgeIndex;

//int main()
//{
//    std::cout << uint64_t(-1) << endl;
//    std::cout << GRAPHENE_DB_MAX_INSTANCE_ID << std::endl;
//    StudentContainer sc;
//    sc.insert(Student(1,"zhangsan",20));
//    sc.insert(Student(3,"lisi",22));
//    sc.insert(Student(2,"wangwu",21));
//    sc.insert(Student(4,"zhaoliu",22));

//    IdIndex& sortById = sc.get<0>();
//    NameIndex& sortByName = sc.get<1>();
//    AgeIndex& sortByAge = sc.get<2>();

//    cout << "sort by id:" << endl;
//    copy(sortById.begin(),sortById.end(), ostream_iterator<Student>(cout));

//    cout << "sort by name:" << endl;
//    copy(sortByName.begin(),sortByName.end(), ostream_iterator<Student>(cout));

//    cout << "sort by age:" << endl;
//    copy(sortByAge.begin(),sortByAge.end(), ostream_iterator<Student>(cout));

//}




