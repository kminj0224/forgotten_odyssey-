/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bfe6  Symbol: actionWithTarget */

/* cocos2d::CCCallFuncO::actionWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCObject*) */

int * __thiscall
cocos2d::CCCallFuncO::actionWithTarget
          (CCCallFuncO *this,CCObject *param_1,_func_void_CCObject_ptr *param_2,CCObject *param_3)

{
  int *this_00;
  int iVar1;
  CCObject *pCVar2;
  
  pCVar2 = param_1;
  this_00 = (int *)operator_new(0x34);
  CCCallFuncO((CCCallFuncO *)this_00);
  if (this_00 != (int *)0x0) {
    iVar1 = (**(code **)(*this_00 + 0x30))(this_00,this,param_1,param_2,param_3,pCVar2);
    if (iVar1 == 0) {
      (**(code **)(*this_00 + 8))(this_00);
      this_00 = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this_00);
    }
  }
  return this_00;
}


