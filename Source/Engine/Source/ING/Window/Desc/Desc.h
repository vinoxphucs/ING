#pragma once

/**
 *	Include Entry Point
 */
#include <ING\EntryPoint\EntryPoint.h>



 /**
  *	Include Utils
  */
#include <ING/Utils/Utils.h>

using namespace ING::Utils;



/**
 *	Include Windows
 */
#include <Windows.h>



namespace ING {

	struct ING_API WindowDesc {

		unsigned int	clientWidth		= 800;
		unsigned int	clientHeight	= 600;

		LPCWSTR			title			= L"New Window";

		bool			show			= true;

	};

}