/*
 * SceneInterface.h
 *
 *  Created on: 11 mar 2018
 *      Author: hunter
 */

#ifndef SCENEINTERFACE_H_
#define SCENEINTERFACE_H_


#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class SceneInterface
{
public:

	/*!
	 * \brief Indicates exit.
	 */
	static const int SCENE_EXIT=0;
	/*!
	 * \brief Indicates that we should transition to the next scene.
	 */
	static const int SCENE_FINISHED=1;
    /*!
     \brief Initializes scene.
    */
	virtual void init(SDL_Renderer *renderer, SDL_Window * window) = 0;
    /*!
     \brief Writes the scene.
     \returns the scene return code.
    */
	virtual int write() = 0;
    /*!
     \brief Closes scene.
    */
	virtual void close() = 0;
};


#endif /* SCENEINTERFACE_H_ */