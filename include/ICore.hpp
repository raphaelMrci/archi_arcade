/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
*/

#ifndef ICORE_HPP_
#define ICORE_HPP_

#include <string>
#include "IGame.hpp"
#include "IGraph.hpp"

namespace Arcade {
    namespace Core {
        class ICore {
            public:
                virtual ~ICore() = default;
                virtual int exec(int ac, char **av) = 0;
        };
    }
}

#endif /* !ICORE_HPP_ */
