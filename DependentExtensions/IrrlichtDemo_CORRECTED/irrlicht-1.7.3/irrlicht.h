/* irrlicht.h -- interface of the 'Irrlicht Engine'

  Copyright (C) 2002-2010 Nikolaus Gebhardt

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Please note that the Irrlicht Engine is based in part on the work of the
  Independent JPEG Group, the zlib and the libPng. This means that if you use
  the Irrlicht Engine in your product, you must acknowledge somewhere in your
  documentation that you've used the IJG code. It would also be nice to mention
  that you use the Irrlicht Engine, the zlib and libPng. See the README files
  in the jpeglib, the zlib and libPng for further informations.
*/

#ifndef __IRRLICHT_H_INCLUDED__
#define __IRRLICHT_H_INCLUDED__

#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/aabbox3d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/coreutil.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/CDynamicMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/CIndexBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/CMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/CVertexBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/dimension2d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ECullingTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EDebugSceneTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EDriverFeatures.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EDriverTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EGUIAlignment.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EGUIElementTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EHardwareBufferFlags.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EMaterialFlags.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EMaterialTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EMeshWriterEnums.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/EMessageBoxFlags.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ESceneNodeAnimatorTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ESceneNodeTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ETerrainElements.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/fast_atof.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/heapsort.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrArray.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrList.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrMap.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrMath.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrString.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrTypes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/irrXML.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAnimatedMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAnimatedMeshMD2.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAnimatedMeshMD3.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAnimatedMeshSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAttributeExchangingObject.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IAttributes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IBillboardSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IBillboardTextSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IBoneSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ICameraSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ICursorControl.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IDummyTransformationSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IDynamicMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IEventReceiver.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IFileList.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IFileSystem.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGeometryCreator.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGPUProgrammingServices.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIButton.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUICheckBox.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIColorSelectDialog.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIComboBox.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIContextMenu.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIEditBox.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIElement.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIElementFactory.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIEnvironment.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIFileOpenDialog.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIFont.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIFontBitmap.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIImage.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIInOutFader.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIListBox.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIMeshViewer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIScrollBar.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUISkin.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUISpinBox.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUISpriteBank.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIStaticText.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUITabControl.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUITable.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIToolbar.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUITreeView.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IGUIWindow.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IImage.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IImageLoader.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IImageWriter.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IIndexBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ILightManager.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ILightSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ILogger.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMaterialRenderer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMaterialRendererServices.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshCache.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshLoader.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshManipulator.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMeshWriter.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IMetaTriangleSelector.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IOSOperator.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IParticleSystemSceneNode.h" // also includes all emitters and attractors
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IQ3LevelMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IQ3Shader.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IrrCompileConfig.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IrrlichtDevice.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IReadFile.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IReferenceCounted.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneCollisionManager.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneManager.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeAnimator.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeAnimatorCameraFPS.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeAnimatorCameraMaya.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeAnimatorCollisionResponse.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeAnimatorFactory.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneNodeFactory.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISceneUserDataSerializer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IShaderConstantSetCallBack.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IShadowVolumeSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ISkinnedMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ITerrainSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ITextSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ITexture.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ITimer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/ITriangleSelector.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IVertexBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IVideoDriver.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IVideoModeList.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IVolumeLightSceneNode.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IWriteFile.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IXMLReader.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/IXMLWriter.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/Keycodes.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/line2d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/line3d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/matrix4.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/path.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/plane3d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/position2d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/quaternion.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/rect.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/S3DVertex.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SAnimatedMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SceneParameters.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SColor.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SExposedVideoData.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SIrrCreationParameters.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SIrrCreationParameters.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SKeyMap.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SLight.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SMaterial.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SMesh.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SMeshBufferLightMap.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SMeshBufferTangents.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SParticle.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SSharedMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SSkinMeshBuffer.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SVertexIndex.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/SViewFrustum.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/triangle3d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/vector2d.h"
#include "../../IrrlichtDemo_CORRECTED/irrlicht-1.7.3/vector3d.h"

//! Everything in the Irrlicht Engine can be found in this namespace.
namespace irr
{
	//! Creates an Irrlicht device. The Irrlicht device is the root object for using the engine.
	/** If you need more parameters to be passed to the creation of the Irrlicht Engine device,
	use the createDeviceEx() function.
	\param deviceType: Type of the device. This can currently be video::EDT_NULL,
	video::EDT_SOFTWARE, video::EDT_BURNINGSVIDEO, video::EDT_DIRECT3D8, video::EDT_DIRECT3D9 and video::EDT_OPENGL.
	\param windowSize: Size of the window or the video mode in fullscreen mode.
	\param bits: Bits per pixel in fullscreen mode. Ignored if windowed mode.
	\param fullscreen: Should be set to true if the device should run in fullscreen. Otherwise
		the device runs in windowed mode.
	\param stencilbuffer: Specifies if the stencil buffer should be enabled. Set this to true,
	if you want the engine be able to draw stencil buffer shadows. Note that not all
	devices are able to use the stencil buffer. If they don't no shadows will be drawn.
	\param vsync: Specifies vertical syncronisation: If set to true, the driver will wait
	for the vertical retrace period, otherwise not.
	\param receiver: A user created event receiver.
	\return Returns pointer to the created IrrlichtDevice or null if the
	device could not be created.
	*/
	extern "C" IRRLICHT_API IrrlichtDevice* IRRCALLCONV createDevice(
		video::E_DRIVER_TYPE deviceType = video::EDT_SOFTWARE,
		// parantheses are necessary for some compilers
		const core::dimension2d<u32>& windowSize = (core::dimension2d<u32>(640,480)),
		u32 bits = 16,
		bool fullscreen = false,
		bool stencilbuffer = false,
		bool vsync = false,
		IEventReceiver* receiver = 0);

	//! typedef for Function Pointer
	typedef IrrlichtDevice* (IRRCALLCONV *funcptr_createDevice )(
			video::E_DRIVER_TYPE deviceType,
			const core::dimension2d<u32>& windowSize,
			u32 bits,
			bool fullscreen,
			bool stencilbuffer,
			bool vsync,
			IEventReceiver* receiver);


	//! Creates an Irrlicht device with the option to specify advanced parameters.
	/** Usually you should used createDevice() for creating an Irrlicht Engine device.
	Use this function only if you wish to specify advanced parameters like a window
	handle in which the device should be created.
	\param parameters: Structure containing advanced parameters for the creation of the device.
	See irr::SIrrlichtCreationParameters for details.
	\return Returns pointer to the created IrrlichtDevice or null if the
	device could not be created. */
	extern "C" IRRLICHT_API IrrlichtDevice* IRRCALLCONV createDeviceEx(
		const SIrrlichtCreationParameters& parameters);

	//! typedef for Function Pointer
	typedef IrrlichtDevice* (IRRCALLCONV *funcptr_createDeviceEx )( const SIrrlichtCreationParameters& parameters );


	// THE FOLLOWING IS AN EMPTY LIST OF ALL SUB NAMESPACES
	// EXISTING ONLY FOR THE DOCUMENTATION SOFTWARE DOXYGEN.

	//! Basic classes such as vectors, planes, arrays, lists, and so on can be found in this namespace.
	namespace core
	{
	}

	//! The gui namespace contains useful classes for easy creation of a graphical user interface.
	namespace gui
	{
	}

	//! This namespace provides interfaces for input/output: Reading and writing files, accessing zip archives, xml files, ...
	namespace io
	{
	}

	//! All scene management can be found in this namespace: Mesh loading, special scene nodes like octrees and billboards, ...
	namespace scene
	{
	}

	//! The video namespace contains classes for accessing the video driver. All 2d and 3d rendering is done here.
	namespace video
	{
	}
}

/*! \file irrlicht.h
	\brief Main header file of the irrlicht, the only file needed to include.
*/

#endif

