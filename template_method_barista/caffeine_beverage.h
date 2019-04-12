#ifndef __caffeine_beverage_h
#define __caffeine_beverage_h

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage();
  
	void prepareRecipe() {
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}
 
private:
	virtual void brew() = 0;
  
	virtual void addCondiments() = 0;
 
	virtual void boilWater();
  
	virtual void pourInCup();
};

#endif
