#include <gtest/gtest.h>
#include <YGEHeightmap.h>
#include <YGESpace.h>

TEST( Heightmap, basicInit ){
  YGEGraphics::YGEHeightmap map;
}


TEST( Heightmap, create ){
  YGEGraphics::YGEHeightmap map;

  map.create("hmap64x64.bmp", "ground.bmp");
}


TEST( Heightmap, makeSolid ){
  YGETimeSpace::YGESpace space;
  space.initTime();

  YGEGraphics::YGEHeightmap* map = new YGEGraphics::YGEHeightmap();
  map->create("hmap64x64.bmp", "ground.bmp");
  
  space.getRootEntity()->addAsset( map );

  map->makeSolid();
}
