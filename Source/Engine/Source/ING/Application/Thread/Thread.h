#pragma once

/**
 *	Include Entry Point
 */
#include <ING\EntryPoint\EntryPoint.h>



/**
 *	Include Utils
 */
#include <ING\Utils/Utils.h>

using namespace ING::Utils;



/**
 *	Include Thread
 */
#include <ING\Thread/Thread.h>



namespace ING {

	class ING_API ApplicationThread : public Thread
	{

		/**
		 *	Nested Types
		 */
	public:
		typedef void (*UpdateFunction)(ApplicationThread* thread);



		/**
		 *	Constructors And Destructor
		 */
	public:
		ApplicationThread(UpdateFunction updateFunction);
		~ApplicationThread();



		/**
		 *	Release Method
		 */
	public:
		virtual void Release() override;



		/**
		 *	Properties
		 */
	private:
		UpdateFunction updateFunction;
		bool isFrameStart;
		bool isFrameEnd;
		std::mutex mutex;
		List<ApplicationThread*>::Node* node;

	public:
		UpdateFunction		GetUpdateFunction	() { return updateFunction; }

		bool				IsFrameStart		() { 
			
			return isFrameStart; 
		}

		bool				IsFrameEnd			() { 
			
			return isFrameEnd; 
		}

		std::mutex&	GetMutex			() { return mutex; }



		/**
		 *	Update, WaitUpdate Methods
		 */
	public:
		void StartUpdate();

		void Update();

		void WaitUpdate();

	};

}