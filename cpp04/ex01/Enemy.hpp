/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:56:32 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 10:10:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {
    private:
        std::string _type;
        int _HP;

    protected:
        void setHP(int HP);
        void setType(std::string type);

    public:
        Enemy(std::string type, int HP);
        Enemy(const Enemy &e);
        Enemy &operator=(const Enemy &e);
        virtual ~Enemy();
        
        std::string getType() const;
        int getHP() const;

        virtual void takeDamage(int dmg);
};

#endif