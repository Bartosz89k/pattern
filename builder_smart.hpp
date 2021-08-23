//#pragma once

// builder
#include <memory> 

namespace::smart_ {

    class Product1{
        public:

        std::vector<std::string> parts_;


        void ListParts()const{
            std::cout << "Product parts: ";

            for(part:parts_) {
                std::cout << part << ", ";
            }
            std::endl;
        }
        
    };


    class Builder {
        
        virtual void build_part() = 0; 
    };

    class Spec1Builder : Builder {
        // Product1 * product;
        std::shared_ptr<Product1> product(nullptr);

        void Reset(){
            this->product= std::shared_ptr<Product1>(new Product1);
        }

        Spec1Builder(){
            // this-> Reset();
        }
        ~Spec1Builder(){
            
        }

        void build_part() {
            // product->ListParts
            product->parts_.push_back("test");
        }

        void build_custom(const std::string &test) {
            product->parts_.push_back("custom");
            // add other custom stuff here: 
            // 
        }

        std::shared_ptr<Product1> GetProduct() {
            // Product1 * result = this-> product;
            std::shared_ptr<Product1> result = this->product;

            this->Reset();
            return result;
        }
        
    }

    class Spec2Builder : Builder {
        Product1 * product;

    }

    class Director {
        Builder * builder;

        void setBuilder(Builder * build) {
            builder = build;
        }

        void build_minimal( ) {
            builder->build_part();
        }

        void build_custom() {
            builder->build_part();
            builder-> build_custom();
        }
    };



}
