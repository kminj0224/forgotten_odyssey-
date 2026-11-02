/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001683ac  Symbol: setDelegate */

/* cocos2d::CCTouchHandler::setDelegate(cocos2d::CCTouchDelegate*) */

undefined8 cocos2d::CCTouchHandler::setDelegate(CCTouchDelegate *param_1)

{
  CCObject *pCVar1;
  CCObject *in_r1;
  int iVar2;
  undefined4 uVar3;
  CCObject *local_1c;
  
  iVar2 = DAT_00168404 + 0x1683b8;
  pCVar1 = in_r1;
  local_1c = in_r1;
  if (in_r1 != (CCObject *)0x0) {
    uVar3 = *(undefined4 *)(iVar2 + DAT_00168408);
    local_1c = *(CCObject **)(iVar2 + DAT_0016840c);
    pCVar1 = (CCObject *)__dynamic_cast(in_r1,uVar3,local_1c,0xfffffffe);
    CCObject::retain(pCVar1);
    pCVar1 = (CCObject *)__dynamic_cast(in_r1,uVar3,local_1c,0xfffffffe);
  }
  CCObject::retain(pCVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    pCVar1 = (CCObject *)
             __dynamic_cast(*(int *)(param_1 + 0x14),*(undefined4 *)(iVar2 + DAT_00168408),
                            *(undefined4 *)(iVar2 + DAT_0016840c),0xfffffffe);
    CCObject::release(pCVar1);
  }
  *(CCObject **)(param_1 + 0x14) = in_r1;
  return CONCAT44(local_1c,param_1);
}


