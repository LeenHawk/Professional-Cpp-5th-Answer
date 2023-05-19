export module concat;

import <concepts>;
import <string>;

template <typename T>
concept CouldToString = requires(const T& t) {std::to_string(t);};

export namespace Concat{
    std::string concat(const CouldToString auto& t1,const CouldToString auto& t2){
        return std::to_string(t1)+std::to_string(t2);
    }
    auto concat(std::string_view t1, std::string_view t2){
	    return std::string{ t1 } + std::string{ t2 };
    }

    auto concat(std::string_view t1, const CouldToString auto& t2){
	    return std::string{ t1 } + std::to_string(t2);
    }

    auto concat(const CouldToString auto& t1, std::string_view t2){
    	return std::to_string(t1) + std::string{ t2 };
    }
}
