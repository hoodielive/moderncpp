#include <iostream>
#include <memory>
#include <string>

class Entity
{
	public:
		Entity()
		{
			std::cout << "Created Entity!" << std::endl;
		}

		~Entity()
		{
			std::cout << "Destroyed Entity!" << std::endl;
		}

		void Print()
		{
			printf("Print something.\n");
		};
};

int main()
{
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		entity->Print();
	};

	return 0;
}
