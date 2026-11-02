/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a4ac  Symbol: addLayer */

/* cocos2d::CCLayerMultiplex::addLayer(cocos2d::CCLayer*) */

void __thiscall cocos2d::CCLayerMultiplex::addLayer(CCLayerMultiplex *this,CCLayer *param_1)

{
  CCMutableArray<cocos2d::CCLayer*>::addObject
            (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),param_1);
  return;
}


