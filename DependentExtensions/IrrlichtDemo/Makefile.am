AM_CPPFLAGS = -iquote$(top_srcdir)/Source \
	-I$(srcdir)/irrlicht-1.7.3 \
	-I$(top_srcdir)/DependentExtensions/miniupnpc-1.5 \
	$(RN_CPPFLAGS)
AM_CXXFLAGS = $(RN_CXXFLAGS)

irrlichtdir = $(pkgdatadir)/Samples/Irrlicht

AM_LDFLAGS = -rpath $(libdir) \
	-rpath $(irrlichtdir)

LDADD = \
	$(top_builddir)/Source/libRakNet.la \
	-L$(srcdir) -lIrrlicht \
	$(top_builddir)/DependentExtensions/miniupnpc-1.5/libminiupnpc.a

AUTOMAKE_OPTIONS = subdir-objects

#IrrlichtDemo program
irrlicht_PROGRAMS = IrrlichtDemo

IrrlichtDemo_SOURCES = \
	CDemo.cpp \
	CDemo.h \
	CMainMenu.cpp \
	CMainMenu.h \
	main.cpp \
	RakNetStuff.cpp \
	RakNetStuff.h \
	resource.h \
	irrlicht-1.7.3/aabbox3d.h \
	irrlicht-1.7.3/CDynamicMeshBuffer.h \
	irrlicht-1.7.3/CIndexBuffer.h \
	irrlicht-1.7.3/CMeshBuffer.h \
	irrlicht-1.7.3/coreutil.h \
	irrlicht-1.7.3/CVertexBuffer.h \
	irrlicht-1.7.3/dimension2d.h \
	irrlicht-1.7.3/driverChoice.h \
	irrlicht-1.7.3/EAttributes.h \
	irrlicht-1.7.3/ECullingTypes.h \
	irrlicht-1.7.3/EDebugSceneTypes.h \
	irrlicht-1.7.3/EDeviceTypes.h \
	irrlicht-1.7.3/EDriverFeatures.h \
	irrlicht-1.7.3/EDriverTypes.h \
	irrlicht-1.7.3/EGUIAlignment.h \
	irrlicht-1.7.3/EGUIElementTypes.h \
	irrlicht-1.7.3/EHardwareBufferFlags.h \
	irrlicht-1.7.3/EMaterialFlags.h \
	irrlicht-1.7.3/EMaterialTypes.h \
	irrlicht-1.7.3/EMeshWriterEnums.h \
	irrlicht-1.7.3/EMessageBoxFlags.h \
	irrlicht-1.7.3/EPrimitiveTypes.h \
	irrlicht-1.7.3/ESceneNodeAnimatorTypes.h \
	irrlicht-1.7.3/ESceneNodeTypes.h \
	irrlicht-1.7.3/EShaderTypes.h \
	irrlicht-1.7.3/ETerrainElements.h \
	irrlicht-1.7.3/fast_atof.h \
	irrlicht-1.7.3/heapsort.h \
	irrlicht-1.7.3/IAnimatedMesh.h \
	irrlicht-1.7.3/IAnimatedMeshMD2.h \
	irrlicht-1.7.3/IAnimatedMeshMD3.h \
	irrlicht-1.7.3/IAnimatedMeshSceneNode.h \
	irrlicht-1.7.3/IAttributeExchangingObject.h \
	irrlicht-1.7.3/IAttributes.h \
	irrlicht-1.7.3/IBillboardSceneNode.h \
	irrlicht-1.7.3/IBillboardTextSceneNode.h \
	irrlicht-1.7.3/IBoneSceneNode.h \
	irrlicht-1.7.3/ICameraSceneNode.h \
	irrlicht-1.7.3/ICursorControl.h \
	irrlicht-1.7.3/IDummyTransformationSceneNode.h \
	irrlicht-1.7.3/IDynamicMeshBuffer.h \
	irrlicht-1.7.3/IEventReceiver.h \
	irrlicht-1.7.3/IFileArchive.h \
	irrlicht-1.7.3/IFileList.h \
	irrlicht-1.7.3/IFileSystem.h \
	irrlicht-1.7.3/IGeometryCreator.h \
	irrlicht-1.7.3/IGPUProgrammingServices.h \
	irrlicht-1.7.3/IGUIButton.h \
	irrlicht-1.7.3/IGUICheckBox.h \
	irrlicht-1.7.3/IGUIColorSelectDialog.h \
	irrlicht-1.7.3/IGUIComboBox.h \
	irrlicht-1.7.3/IGUIContextMenu.h \
	irrlicht-1.7.3/IGUIEditBox.h \
	irrlicht-1.7.3/IGUIElementFactory.h \
	irrlicht-1.7.3/IGUIElement.h \
	irrlicht-1.7.3/IGUIEnvironment.h \
	irrlicht-1.7.3/IGUIFileOpenDialog.h \
	irrlicht-1.7.3/IGUIFontBitmap.h \
	irrlicht-1.7.3/IGUIFont.h \
	irrlicht-1.7.3/IGUIImage.h \
	irrlicht-1.7.3/IGUIImageList.h \
	irrlicht-1.7.3/IGUIInOutFader.h \
	irrlicht-1.7.3/IGUIListBox.h \
	irrlicht-1.7.3/IGUIMeshViewer.h \
	irrlicht-1.7.3/IGUIScrollBar.h \
	irrlicht-1.7.3/IGUISkin.h \
	irrlicht-1.7.3/IGUISpinBox.h \
	irrlicht-1.7.3/IGUISpriteBank.h \
	irrlicht-1.7.3/IGUIStaticText.h \
	irrlicht-1.7.3/IGUITabControl.h \
	irrlicht-1.7.3/IGUITable.h \
	irrlicht-1.7.3/IGUIToolbar.h \
	irrlicht-1.7.3/IGUITreeView.h \
	irrlicht-1.7.3/IGUIWindow.h \
	irrlicht-1.7.3/IImage.h \
	irrlicht-1.7.3/IImageLoader.h \
	irrlicht-1.7.3/IImageWriter.h \
	irrlicht-1.7.3/IIndexBuffer.h \
	irrlicht-1.7.3/ILightManager.h \
	irrlicht-1.7.3/ILightSceneNode.h \
	irrlicht-1.7.3/ILogger.h \
	irrlicht-1.7.3/IMaterialRenderer.h \
	irrlicht-1.7.3/IMaterialRendererServices.h \
	irrlicht-1.7.3/IMeshBuffer.h \
	irrlicht-1.7.3/IMeshCache.h \
	irrlicht-1.7.3/IMesh.h \
	irrlicht-1.7.3/IMeshLoader.h \
	irrlicht-1.7.3/IMeshManipulator.h \
	irrlicht-1.7.3/IMeshSceneNode.h \
	irrlicht-1.7.3/IMeshWriter.h \
	irrlicht-1.7.3/IMetaTriangleSelector.h \
	irrlicht-1.7.3/IOSOperator.h \
	irrlicht-1.7.3/IParticleAffector.h \
	irrlicht-1.7.3/IParticleAnimatedMeshSceneNodeEmitter.h \
	irrlicht-1.7.3/IParticleAttractionAffector.h \
	irrlicht-1.7.3/IParticleBoxEmitter.h \
	irrlicht-1.7.3/IParticleCylinderEmitter.h \
	irrlicht-1.7.3/IParticleEmitter.h \
	irrlicht-1.7.3/IParticleFadeOutAffector.h \
	irrlicht-1.7.3/IParticleGravityAffector.h \
	irrlicht-1.7.3/IParticleMeshEmitter.h \
	irrlicht-1.7.3/IParticleRingEmitter.h \
	irrlicht-1.7.3/IParticleRotationAffector.h \
	irrlicht-1.7.3/IParticleSphereEmitter.h \
	irrlicht-1.7.3/IParticleSystemSceneNode.h \
	irrlicht-1.7.3/IQ3LevelMesh.h \
	irrlicht-1.7.3/IQ3Shader.h \
	irrlicht-1.7.3/IReadFile.h \
	irrlicht-1.7.3/IReferenceCounted.h \
	irrlicht-1.7.3/irrAllocator.h \
	irrlicht-1.7.3/irrArray.h \
	irrlicht-1.7.3/IrrCompileConfig.h \
	irrlicht-1.7.3/IrrlichtDevice.h \
	irrlicht-1.7.3/irrlicht.h \
	irrlicht-1.7.3/irrList.h \
	irrlicht-1.7.3/irrMap.h \
	irrlicht-1.7.3/irrMath.h \
	irrlicht-1.7.3/irrString.h \
	irrlicht-1.7.3/irrTypes.h \
	irrlicht-1.7.3/irrXML.h \
	irrlicht-1.7.3/ISceneCollisionManager.h \
	irrlicht-1.7.3/ISceneManager.h \
	irrlicht-1.7.3/ISceneNodeAnimatorCameraFPS.h \
	irrlicht-1.7.3/ISceneNodeAnimatorCameraMaya.h \
	irrlicht-1.7.3/ISceneNodeAnimatorCollisionResponse.h \
	irrlicht-1.7.3/ISceneNodeAnimatorFactory.h \
	irrlicht-1.7.3/ISceneNodeAnimator.h \
	irrlicht-1.7.3/ISceneNodeFactory.h \
	irrlicht-1.7.3/ISceneNode.h \
	irrlicht-1.7.3/ISceneUserDataSerializer.h \
	irrlicht-1.7.3/IShaderConstantSetCallBack.h \
	irrlicht-1.7.3/IShadowVolumeSceneNode.h \
	irrlicht-1.7.3/ISkinnedMesh.h \
	irrlicht-1.7.3/ITerrainSceneNode.h \
	irrlicht-1.7.3/ITextSceneNode.h \
	irrlicht-1.7.3/ITexture.h \
	irrlicht-1.7.3/ITimer.h \
	irrlicht-1.7.3/ITriangleSelector.h \
	irrlicht-1.7.3/IVertexBuffer.h \
	irrlicht-1.7.3/IVideoDriver.h \
	irrlicht-1.7.3/IVideoModeList.h \
	irrlicht-1.7.3/IVolumeLightSceneNode.h \
	irrlicht-1.7.3/IWriteFile.h \
	irrlicht-1.7.3/IXMLReader.h \
	irrlicht-1.7.3/IXMLWriter.h \
	irrlicht-1.7.3/Keycodes.h \
	irrlicht-1.7.3/line2d.h \
	irrlicht-1.7.3/line3d.h \
	irrlicht-1.7.3/matrix4.h \
	irrlicht-1.7.3/path.h \
	irrlicht-1.7.3/plane3d.h \
	irrlicht-1.7.3/position2d.h \
	irrlicht-1.7.3/quaternion.h \
	irrlicht-1.7.3/rect.h \
	irrlicht-1.7.3/S3DVertex.h \
	irrlicht-1.7.3/SAnimatedMesh.h \
	irrlicht-1.7.3/SceneParameters.h \
	irrlicht-1.7.3/SColor.h \
	irrlicht-1.7.3/SExposedVideoData.h \
	irrlicht-1.7.3/SIrrCreationParameters.h \
	irrlicht-1.7.3/SKeyMap.h \
	irrlicht-1.7.3/SLight.h \
	irrlicht-1.7.3/SMaterial.h \
	irrlicht-1.7.3/SMaterialLayer.h \
	irrlicht-1.7.3/SMeshBuffer.h \
	irrlicht-1.7.3/SMeshBufferLightMap.h \
	irrlicht-1.7.3/SMeshBufferTangents.h \
	irrlicht-1.7.3/SMesh.h \
	irrlicht-1.7.3/SParticle.h \
	irrlicht-1.7.3/SSharedMeshBuffer.h \
	irrlicht-1.7.3/SSkinMeshBuffer.h \
	irrlicht-1.7.3/SVertexIndex.h \
	irrlicht-1.7.3/SVertexManipulator.h \
	irrlicht-1.7.3/SViewFrustum.h \
	irrlicht-1.7.3/triangle3d.h \
	irrlicht-1.7.3/vector2d.h \
	irrlicht-1.7.3/vector3d.h

#data
dist_irrlicht_DATA = \
	$(srcdir)/libIrrlicht.so \
	$(srcdir)/readme.txt

irrlichtmediadir = $(irrlichtdir)/IrrlichtMedia
dist_irrlichtmedia_DATA = \
	$(srcdir)/IrrlichtMedia/ball.wav \
	$(srcdir)/IrrlichtMedia/fireball.bmp \
	$(srcdir)/IrrlichtMedia/fonthaettenschweiler.bmp \
	$(srcdir)/IrrlichtMedia/impact.wav \
	$(srcdir)/IrrlichtMedia/irrlicht2_bk.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht2_dn.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht2_ft.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht2_lf.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht2_rt.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht2_up.jpg \
	$(srcdir)/IrrlichtMedia/irrlicht.dat \
	$(srcdir)/IrrlichtMedia/irrlichtlogo2.png \
	$(srcdir)/IrrlichtMedia/IrrlichtTheme.ogg \
	$(srcdir)/IrrlichtMedia/map-20kdm2.pk3 \
	$(srcdir)/IrrlichtMedia/particlewhite.bmp \
	$(srcdir)/IrrlichtMedia/portal1.bmp \
	$(srcdir)/IrrlichtMedia/portal2.bmp \
	$(srcdir)/IrrlichtMedia/portal3.bmp \
	$(srcdir)/IrrlichtMedia/portal4.bmp \
	$(srcdir)/IrrlichtMedia/portal5.bmp \
	$(srcdir)/IrrlichtMedia/portal6.bmp \
	$(srcdir)/IrrlichtMedia/portal7.bmp \
	$(srcdir)/IrrlichtMedia/smoke.bmp \
	$(srcdir)/IrrlichtMedia/sydney.bmp \
	$(srcdir)/IrrlichtMedia/sydney.md2
