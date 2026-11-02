/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a13c  Symbol: switchTo */

/* cocos2d::CCLayerMultiplex::switchTo(unsigned int) */

void __thiscall cocos2d::CCLayerMultiplex::switchTo(CCLayerMultiplex *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CCMutableArray<cocos2d::CCLayer*>::getObjectAtIndex
                    (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),*(uint *)(this + 0x110));
  (**(code **)(*(int *)this + 0xd0))(this,uVar1,1);
  *(uint *)(this + 0x110) = param_1;
  uVar1 = CCMutableArray<cocos2d::CCLayer*>::getObjectAtIndex
                    (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),param_1);
  (**(code **)(*(int *)this + 0xc4))(this,uVar1);
  return;
}


