/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158ee4  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesCancel */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesCancel
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CCEGLView *this;
  undefined4 uVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  CCObject *this_00;
  int *piVar7;
  int *apiStack_70 [2];
  int local_68;
  int *local_64;
  undefined4 local_60;
  int *local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_44;
  undefined4 local_40;
  CCSet aCStack_34 [24];
  int local_1c;
  
  piVar7 = *(int **)(DAT_0015904c + 0x158ef0);
  local_1c = *piVar7;
  local_64 = (int *)param_5;
  local_60 = param_4;
  local_54 = param_3;
  local_58 = (**(code **)(*param_1 + 0x2ac))(param_1,param_3);
  uVar5 = local_58 * 4 + 0xeU & 0xfffffff8;
  ppiVar3 = (int **)((int)apiStack_70 + uVar5 * -3);
  local_5c = (int *)((int)&local_68 - uVar5);
  local_50 = (int *)((int)&local_68 + uVar5 * -2);
  local_4c = (int *)((int)&local_68 + uVar5 * -3);
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getViewPort();
  this = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
  local_68 = cocos2d::CCEGLView::getScreenScaleFactor(this);
  cocos2d::CCSet::CCSet(aCStack_34);
  iVar4 = *param_1;
  *ppiVar3 = local_5c;
  (**(code **)(iVar4 + 0x32c))(param_1,local_54,0,local_58);
  iVar4 = *param_1;
  *ppiVar3 = local_50;
  (**(code **)(iVar4 + 0x334))(param_1,local_60,0,local_58);
  iVar4 = *param_1;
  *ppiVar3 = local_4c;
  (**(code **)(iVar4 + 0x334))(param_1,local_64,0,local_58);
  iVar4 = DAT_00159050 + 0x158fa0;
  piVar2 = local_5c;
  local_64 = piVar7;
  for (local_54 = 0; local_54 < local_58; local_54 = local_54 + 1) {
    local_5c = (int *)*piVar2;
    this_00 = *(CCObject **)((int)local_5c * 4 + iVar4);
    if (this_00 != (CCObject *)0x0) {
      uVar1 = __subsf3(*local_50,local_44);
      local_60 = __divsf3(uVar1,local_68);
      uVar1 = __subsf3(*local_4c,local_40);
      uVar1 = __divsf3(uVar1,local_68);
      *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this_00 + 0x18);
      uVar6 = *(undefined4 *)(this_00 + 0x1c);
      *(undefined4 *)(this_00 + 0x1c) = uVar1;
      *(undefined4 *)(this_00 + 0x24) = uVar6;
      *(undefined4 *)(this_00 + 0x14) = 0;
      *(int **)(this_00 + 0x28) = local_5c;
      *(undefined4 *)(this_00 + 0x18) = local_60;
      cocos2d::CCSet::addObject((CCObject *)aCStack_34);
      *(undefined4 *)(*piVar2 * 4 + iVar4) = 0;
      cocos2d::CCObject::release(this_00);
    }
    local_50 = local_50 + 1;
    local_4c = local_4c + 1;
    piVar2 = piVar2 + 1;
  }
  iVar4 = cocos2d::CCDirector::sharedDirector();
  piVar2 = (int *)cocos2d::CCEGLView::getDelegate(*(CCEGLView **)(iVar4 + 0x14));
  (**(code **)(*piVar2 + 0xc))(piVar2,aCStack_34,0);
  cocos2d::CCSet::~CCSet(aCStack_34);
  if (local_1c != *local_64) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


