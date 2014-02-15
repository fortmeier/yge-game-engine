cmake_minimum_required (VERSION 2.6)
project(YGELib)

FIND_PACKAGE( SDL )

FIND_PACKAGE( OpenAL )

FIND_PATH(ODE_INCLUDE_DIR ode/ode.h
  /usr/include
  /usr/local/include
)
FIND_LIBRARY(ODE_LIBRARY
  NAMES ode
  PATHS
   /usr/lib
   /usr/local/lib
)

SET( src_files
  src/YGESkybox.cpp
  src/YGESound.cpp
  src/Template.cpp
  src/YGEGraphicsContext.cpp
  src/YGEEntity.cpp
  src/YGESimpleSphere.cpp
  src/YGEScene.cpp
  src/YGEHeightmap.cpp
  src/YGEConsole.cpp
  src/YGETimer.cpp
  src/YGEEngineCoreMultiThreaded.cpp
  src/YGEBodyAsset.cpp
  src/YGEEntityAsset.cpp
  src/YGESunlight.cpp
  src/YGEText.cpp
  src/YGEObserver.cpp
  src/YGEEngineCoreSingleThreaded.cpp
  src/YGEStaticMesh.cpp
  src/YGEAudioCore.cpp
  src/YGESkybox.cpp
  src/YGEGraphicsCore.cpp
  src/YGESoundAsset.cpp
  src/YGEQuaternion.cpp
  src/YGEVector2.cpp
  src/YGELogger.cpp
  src/YGEPrimitives.cpp
  src/YGETexture.cpp
  src/YGEResourceManager.cpp
  src/YGEWater.cpp
  src/YGEVector3.cpp
  src/YGEParticleSystem.cpp
  src/YGEVbo.cpp
  src/YGEInputManager.cpp
  src/YGEEngineCore.cpp
  src/YGESimpleHullAsset.cpp
  src/YGESpace.cpp
  src/stdafx.cpp
  src/YGESimpleBox.cpp
)

INCLUDE_DIRECTORIES(
  ${SDL_INCLUDE_DIR}
  ${OPENAL_INCLUDE_DIR}
)

add_library( yge ${src_files})
