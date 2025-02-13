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
 *	Include Rendering Pipeline
 */
#include <ING/Rendering/Pipeline/Pipeline.h>



/**
 *	Include SubRP Pipeline
 */
#include <ING/Rendering/SubRP/Pipeline/Pipeline.h>



namespace ING {

	class Camera;



	namespace Rendering {

		class IRenderer;

		class IDevice;

		class IDeviceContext;

		class IPass;



		namespace StandardRP {

			class ING_API Pipeline : public IPipeline
			{

				/**
				 *	Constructors And Destructor
				 */
			public:
				Pipeline(std::string name);
				~Pipeline();



				/**
				 *	Release Methods
				 */
			public:
				virtual void Release() override;



				/**
				 *	Properties
				 */
			private:
				IPass*				firstPass;
				IPass*				targetFirstPass;

				IPass*				finalPass;
				IPass*				targetFinalPass;

				SubRP::Pipeline*	afterFirstPassSubPipeline;
				SubRP::Pipeline*	beforeFinalPassSubPipeline;

			public:
				IPass*				GetFirstPass					() { return firstPass; }
				IPass*				GetTargetFirstPass				() { return targetFirstPass; }
				void				SetFirstPass					(IPass* firstPass);

				IPass*				GetFinalPass					() { return finalPass; }
				IPass*				GetTargetFinalPass				() { return targetFinalPass; }
				void				SetFinalPass					(IPass* finalPass);

				SubRP::Pipeline*	GetAfterFirstPassSubPipeline	() { return afterFirstPassSubPipeline; }
				SubRP::Pipeline*	GetBeforeFinalPassSubPipeline	() { return beforeFinalPassSubPipeline; }



				/**
				 *	Methods
				 */
			public:
				virtual void Render(IDeviceContext* context) override;

			};

		}

	}

}