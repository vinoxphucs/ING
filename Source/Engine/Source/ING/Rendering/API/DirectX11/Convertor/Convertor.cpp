
/**
 *	Include Header
 */
#include "Convertor.h"



namespace ING {

	namespace Rendering {

		namespace DirectX11 {

			/**
			 *	Constructors And Destructor
			 */
			Convertor::Convertor() {

				/**
				 *	Setup Maps
				 */
				/* Clear Flag */
				clearFlagMap[CLEAR_DEPTH]					= D3D11_CLEAR_DEPTH;
				clearFlagMap[CLEAR_STENCIL]					= D3D11_CLEAR_STENCIL;

				/* Cull Mode */
				cullModeMap[CULL_BACK]						= D3D11_CULL_BACK;
				cullModeMap[CULL_FRONT]						= D3D11_CULL_BACK;
				cullModeMap[CULL_NONE]						= D3D11_CULL_NONE;

				/* Fill Mode */
				fillModeMap[FILL_SOLID]						= D3D11_FILL_SOLID;
				fillModeMap[FILL_WIREFRAME]					= D3D11_FILL_WIREFRAME;

				/* Format */
				formatMap[FORMAT_UNKNOWN] = DXGI_FORMAT_UNKNOWN;
				formatMap[FORMAT_R32G32B32A32_TYPELESS] = DXGI_FORMAT_R32G32B32A32_TYPELESS;
				formatMap[FORMAT_R32G32B32A32_FLOAT] = DXGI_FORMAT_R32G32B32A32_FLOAT;
				formatMap[FORMAT_R32G32B32A32_UINT] = DXGI_FORMAT_R32G32B32A32_UINT;
				formatMap[FORMAT_R32G32B32A32_SINT] = DXGI_FORMAT_R32G32B32A32_SINT;
				formatMap[FORMAT_R32G32B32_TYPELESS] = DXGI_FORMAT_R32G32B32_TYPELESS;
				formatMap[FORMAT_R32G32B32_FLOAT] = DXGI_FORMAT_R32G32B32_FLOAT;
				formatMap[FORMAT_R32G32B32_UINT] = DXGI_FORMAT_R32G32B32_UINT;
				formatMap[FORMAT_R32G32B32_SINT] = DXGI_FORMAT_R32G32B32_SINT;
				formatMap[FORMAT_R16G16B16A16_TYPELESS] = DXGI_FORMAT_R16G16B16A16_TYPELESS;
				formatMap[FORMAT_R16G16B16A16_FLOAT] = DXGI_FORMAT_R16G16B16A16_FLOAT;
				formatMap[FORMAT_R16G16B16A16_UNORM] = DXGI_FORMAT_R16G16B16A16_UNORM;
				formatMap[FORMAT_R16G16B16A16_UINT] = DXGI_FORMAT_R16G16B16A16_UINT;
				formatMap[FORMAT_R16G16B16A16_SNORM] = DXGI_FORMAT_R16G16B16A16_SNORM;
				formatMap[FORMAT_R16G16B16A16_SINT] = DXGI_FORMAT_R16G16B16A16_SINT;
				formatMap[FORMAT_R32G32_TYPELESS] = DXGI_FORMAT_R32G32_TYPELESS;
				formatMap[FORMAT_R32G32_FLOAT] = DXGI_FORMAT_R32G32_FLOAT;
				formatMap[FORMAT_R32G32_UINT] = DXGI_FORMAT_R32G32_UINT;
				formatMap[FORMAT_R32G32_SINT] = DXGI_FORMAT_R32G32_SINT;
				formatMap[FORMAT_R32G8X24_TYPELESS] = DXGI_FORMAT_R32G8X24_TYPELESS;
				formatMap[FORMAT_D32_FLOAT_S8X24_UINT] = DXGI_FORMAT_D32_FLOAT_S8X24_UINT;
				formatMap[FORMAT_R32_FLOAT_X8X24_TYPELESS] = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
				formatMap[FORMAT_X32_TYPELESS_G8X24_UINT] = DXGI_FORMAT_X32_TYPELESS_G8X24_UINT;
				formatMap[FORMAT_R10G10B10A2_TYPELESS] = DXGI_FORMAT_R10G10B10A2_TYPELESS;
				formatMap[FORMAT_R10G10B10A2_UNORM] = DXGI_FORMAT_R10G10B10A2_UNORM;
				formatMap[FORMAT_R10G10B10A2_UINT] = DXGI_FORMAT_R10G10B10A2_UINT;
				formatMap[FORMAT_R11G11B10_FLOAT] = DXGI_FORMAT_R11G11B10_FLOAT;
				formatMap[FORMAT_R8G8B8A8_TYPELESS] = DXGI_FORMAT_R8G8B8A8_TYPELESS;
				formatMap[FORMAT_R8G8B8A8_UNORM] = DXGI_FORMAT_R8G8B8A8_UNORM;
				formatMap[FORMAT_R8G8B8A8_UNORM_SRGB] = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
				formatMap[FORMAT_R8G8B8A8_UINT] = DXGI_FORMAT_R8G8B8A8_UINT;
				formatMap[FORMAT_R8G8B8A8_SNORM] = DXGI_FORMAT_R8G8B8A8_SNORM;
				formatMap[FORMAT_R8G8B8A8_SINT] = DXGI_FORMAT_R8G8B8A8_SINT;
				formatMap[FORMAT_R16G16_TYPELESS] = DXGI_FORMAT_R16G16_TYPELESS;
				formatMap[FORMAT_R16G16_FLOAT] = DXGI_FORMAT_R16G16_FLOAT;
				formatMap[FORMAT_R16G16_UNORM] = DXGI_FORMAT_R16G16_UNORM;
				formatMap[FORMAT_R16G16_UINT] = DXGI_FORMAT_R16G16_UINT;
				formatMap[FORMAT_R16G16_SNORM] = DXGI_FORMAT_R16G16_SNORM;
				formatMap[FORMAT_R16G16_SINT] = DXGI_FORMAT_R16G16_SINT;
				formatMap[FORMAT_R32_TYPELESS] = DXGI_FORMAT_R32_TYPELESS;
				formatMap[FORMAT_D32_FLOAT] = DXGI_FORMAT_D32_FLOAT;
				formatMap[FORMAT_R32_FLOAT] = DXGI_FORMAT_R32_FLOAT;
				formatMap[FORMAT_R32_UINT] = DXGI_FORMAT_R32_UINT;
				formatMap[FORMAT_R32_SINT] = DXGI_FORMAT_R32_SINT;
				formatMap[FORMAT_R24G8_TYPELESS] = DXGI_FORMAT_R24G8_TYPELESS;
				formatMap[FORMAT_D24_UNORM_S8_UINT] = DXGI_FORMAT_D24_UNORM_S8_UINT;
				formatMap[FORMAT_R24_UNORM_X8_TYPELESS] = DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
				formatMap[FORMAT_X24_TYPELESS_G8_UINT] = DXGI_FORMAT_X24_TYPELESS_G8_UINT;
				formatMap[FORMAT_R8G8_TYPELESS] = DXGI_FORMAT_R8G8_TYPELESS;
				formatMap[FORMAT_R8G8_UNORM] = DXGI_FORMAT_R8G8_UNORM;
				formatMap[FORMAT_R8G8_UINT] = DXGI_FORMAT_R8G8_UINT;
				formatMap[FORMAT_R8G8_SNORM] = DXGI_FORMAT_R8G8_SNORM;
				formatMap[FORMAT_R8G8_SINT] = DXGI_FORMAT_R8G8_SINT;
				formatMap[FORMAT_R16_TYPELESS] = DXGI_FORMAT_R16_TYPELESS;
				formatMap[FORMAT_R16_FLOAT] = DXGI_FORMAT_R16_FLOAT;
				formatMap[FORMAT_D16_UNORM] = DXGI_FORMAT_D16_UNORM;
				formatMap[FORMAT_R16_UNORM] = DXGI_FORMAT_R16_UNORM;
				formatMap[FORMAT_R16_UINT] = DXGI_FORMAT_R16_UINT;
				formatMap[FORMAT_R16_SNORM] = DXGI_FORMAT_R16_SNORM;
				formatMap[FORMAT_R16_SINT] = DXGI_FORMAT_R16_SINT;
				formatMap[FORMAT_R8_TYPELESS] = DXGI_FORMAT_R8_TYPELESS;
				formatMap[FORMAT_R8_UNORM] = DXGI_FORMAT_R8_UNORM;
				formatMap[FORMAT_R8_UINT] = DXGI_FORMAT_R8_UINT;
				formatMap[FORMAT_R8_SNORM] = DXGI_FORMAT_R8_SNORM;
				formatMap[FORMAT_R8_SINT] = DXGI_FORMAT_R8_SINT;
				formatMap[FORMAT_A8_UNORM] = DXGI_FORMAT_A8_UNORM;
				formatMap[FORMAT_R1_UNORM] = DXGI_FORMAT_R1_UNORM;
				formatMap[FORMAT_R9G9B9E5_SHAREDEXP] = DXGI_FORMAT_R9G9B9E5_SHAREDEXP;
				formatMap[FORMAT_R8G8_B8G8_UNORM] = DXGI_FORMAT_R8G8_B8G8_UNORM;
				formatMap[FORMAT_G8R8_G8B8_UNORM] = DXGI_FORMAT_G8R8_G8B8_UNORM;
				formatMap[FORMAT_BC1_TYPELESS] = DXGI_FORMAT_BC1_TYPELESS;
				formatMap[FORMAT_BC1_UNORM] = DXGI_FORMAT_BC1_UNORM;
				formatMap[FORMAT_BC1_UNORM_SRGB] = DXGI_FORMAT_BC1_UNORM_SRGB;
				formatMap[FORMAT_BC2_TYPELESS] = DXGI_FORMAT_BC2_TYPELESS;
				formatMap[FORMAT_BC2_UNORM] = DXGI_FORMAT_BC2_UNORM;
				formatMap[FORMAT_BC2_UNORM_SRGB] = DXGI_FORMAT_BC2_UNORM_SRGB;
				formatMap[FORMAT_BC3_TYPELESS] = DXGI_FORMAT_BC3_TYPELESS;
				formatMap[FORMAT_BC3_UNORM] = DXGI_FORMAT_BC3_UNORM;
				formatMap[FORMAT_BC3_UNORM_SRGB] = DXGI_FORMAT_BC3_UNORM_SRGB;
				formatMap[FORMAT_BC4_TYPELESS] = DXGI_FORMAT_BC4_TYPELESS;
				formatMap[FORMAT_BC4_UNORM] = DXGI_FORMAT_BC4_UNORM;
				formatMap[FORMAT_BC4_SNORM] = DXGI_FORMAT_BC4_SNORM;
				formatMap[FORMAT_BC5_TYPELESS] = DXGI_FORMAT_BC5_TYPELESS;
				formatMap[FORMAT_BC5_UNORM] = DXGI_FORMAT_BC5_UNORM;
				formatMap[FORMAT_BC5_SNORM] = DXGI_FORMAT_BC5_SNORM;
				formatMap[FORMAT_B5G6R5_UNORM] = DXGI_FORMAT_B5G6R5_UNORM;
				formatMap[FORMAT_B5G5R5A1_UNORM] = DXGI_FORMAT_B5G5R5A1_UNORM;
				formatMap[FORMAT_B8G8R8A8_UNORM] = DXGI_FORMAT_B8G8R8A8_UNORM;
				formatMap[FORMAT_B8G8R8X8_UNORM] = DXGI_FORMAT_B8G8R8X8_UNORM;
				formatMap[FORMAT_R10G10B10_XR_BIAS_A2_UNORM] = DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM;
				formatMap[FORMAT_B8G8R8A8_TYPELESS] = DXGI_FORMAT_B8G8R8A8_TYPELESS;
				formatMap[FORMAT_B8G8R8A8_UNORM_SRGB] = DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
				formatMap[FORMAT_B8G8R8X8_TYPELESS] = DXGI_FORMAT_B8G8R8X8_TYPELESS;
				formatMap[FORMAT_B8G8R8X8_UNORM_SRGB] = DXGI_FORMAT_B8G8R8X8_UNORM_SRGB;
				formatMap[FORMAT_BC6H_TYPELESS] = DXGI_FORMAT_BC6H_TYPELESS;
				formatMap[FORMAT_BC6H_UF16] = DXGI_FORMAT_BC6H_UF16;
				formatMap[FORMAT_BC6H_SF16] = DXGI_FORMAT_BC6H_SF16;
				formatMap[FORMAT_BC7_TYPELESS] = DXGI_FORMAT_BC7_TYPELESS;
				formatMap[FORMAT_BC7_UNORM] = DXGI_FORMAT_BC7_UNORM;
				formatMap[FORMAT_BC7_UNORM_SRGB] = DXGI_FORMAT_BC7_UNORM_SRGB;
				formatMap[FORMAT_AYUV] = DXGI_FORMAT_AYUV;
				formatMap[FORMAT_Y410] = DXGI_FORMAT_Y410;
				formatMap[FORMAT_Y416] = DXGI_FORMAT_Y416;
				formatMap[FORMAT_NV12] = DXGI_FORMAT_NV12;
				formatMap[FORMAT_P010] = DXGI_FORMAT_P010;
				formatMap[FORMAT_P016] = DXGI_FORMAT_P016;
				formatMap[FORMAT_420_OPAQUE] = DXGI_FORMAT_420_OPAQUE;
				formatMap[FORMAT_YUY2] = DXGI_FORMAT_YUY2;
				formatMap[FORMAT_Y210] = DXGI_FORMAT_Y210;
				formatMap[FORMAT_Y216] = DXGI_FORMAT_Y216;
				formatMap[FORMAT_NV11] = DXGI_FORMAT_NV11;
				formatMap[FORMAT_AI44] = DXGI_FORMAT_AI44;
				formatMap[FORMAT_IA44] = DXGI_FORMAT_IA44;
				formatMap[FORMAT_P8] = DXGI_FORMAT_P8;
				formatMap[FORMAT_A8P8] = DXGI_FORMAT_A8P8;
				formatMap[FORMAT_B4G4R4A4_UNORM] = DXGI_FORMAT_B4G4R4A4_UNORM;
				formatMap[FORMAT_P208] = DXGI_FORMAT_P208;
				formatMap[FORMAT_V208] = DXGI_FORMAT_V208;
				formatMap[FORMAT_V408] = DXGI_FORMAT_V408;
				formatMap[FORMAT_SAMPLER_FEEDBACK_MIN_MIP_OPAQUE] = DXGI_FORMAT_SAMPLER_FEEDBACK_MIN_MIP_OPAQUE;
				formatMap[FORMAT_SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE] = DXGI_FORMAT_SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE;
				formatMap[FORMAT_FORCE_UINT] = DXGI_FORMAT_FORCE_UINT;
			

				/* Primitive Topology */
				primitiveTopologyMap[POINT_LIST]			= D3D11_PRIMITIVE_TOPOLOGY_POINTLIST;
				primitiveTopologyMap[LINE_LIST]				= D3D11_PRIMITIVE_TOPOLOGY_LINELIST;
				primitiveTopologyMap[LINE_LIST_ADJ]			= D3D11_PRIMITIVE_TOPOLOGY_LINELIST_ADJ;
				primitiveTopologyMap[LINE_STRIP]			= D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP;
				primitiveTopologyMap[LINE_STRIP_ADJ]		= D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ;
				primitiveTopologyMap[TRIANGLE_LIST]			= D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
				primitiveTopologyMap[TRIANGLE_LIST_ADJ]		= D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST_ADJ;
				primitiveTopologyMap[TRIANGLE_STRIP]		= D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP;
				primitiveTopologyMap[TRIANGLE_STRIP_ADJ]	= D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ;

			}

			Convertor::~Convertor() {



			}



			/**
			 *	Release Methods
			 */
			void Convertor::Release() {


				/* Clear Maps */
				clearFlagMap.clear();

				cullModeMap.clear();
				
				fillModeMap.clear();
				
				formatMap.clear();
				
				primitiveTopologyMap.clear();



				IConvertor::Release();

			}

		}

	}

}