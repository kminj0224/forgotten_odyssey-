/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a1a0  Symbol: switchToAndReleaseMe */

/* cocos2d::CCLayerMultiplex::switchToAndReleaseMe(unsigned int) */

void __thiscall cocos2d::CCLayerMultiplex::switchToAndReleaseMe(CCLayerMultiplex *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CCMutableArray<cocos2d::CCLayer*>::getObjectAtIndex
                    (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),*(uint *)(this + 0x110));
  (**(code **)(*(int *)this + 0xd0))(this,uVar1,1);
  CCMutableArray<cocos2d::CCLayer*>::replaceObjectAtIndex
            (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),*(uint *)(this + 0x110),
             (CCLayer *)0x0,true);
  *(uint *)(this + 0x110) = param_1;
  uVar1 = CCMutableArray<cocos2d::CCLayer*>::getObjectAtIndex
                    (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),param_1);
  (**(code **)(*(int *)this + 0xc4))(this,uVar1);
  return;
}


