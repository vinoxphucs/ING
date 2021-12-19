#include "Application.h"


#include <ING/Utils/Utils.h>

using namespace ING::Utils;



#include <ING/Rendering/Rendering.h>

using namespace ING::Rendering;



#include <ING/Thread/Manager/Manager.h>
#include <ING/Event/Manager/Manager.h>




namespace ING {

	/*
	 *	Constructors And Destructor
	 */
	Application::Application() {

		/*
		 *	Add Squares
		 */

		AddSquare<Thread::Manager>();

		AddSquare<Event::Manager>();


	}

	Application::~Application() {



	}



	/*
	 *	Init, Run, Release Methods
	 */
	bool Application::Init() {


		Board<Application>::Init();

		return true;
	}


	bool Application::Run() {


		Board<Application>::Run();

		return true;
	}


	bool Application::Release() {


		Board<Application>::Release();

		return true;
	}


}
