/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158d78  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesMove */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesMove
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CCEGLView *this;
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *apiStack_78 [2];
  int aiStack_70 [2];
  int **local_68;
  int *local_64;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  undefined4 local_44;
  undefined4 local_40;
  CCSet aCStack_34 [24];
  int local_1c;
  
  local_68 = apiStack_78;
  piVar8 = *(int **)(DAT_00158edc + 0x158d84);
  local_1c = *piVar8;
  local_64 = (int *)param_5;
  local_60 = param_4;
  local_4c = param_3;
  local_5c = (**(code **)(*param_1 + 0x2ac))(param_1,param_3);
  uVar5 = local_5c * 4 + 0xeU & 0xfffffff8;
  ppiVar3 = (int **)((int)apiStack_78 + uVar5 * -3);
  local_50 = (int *)((int)aiStack_70 - uVar5);
  local_58 = (int *)((int)aiStack_70 + uVar5 * -2);
  local_54 = (int *)((int)aiStack_70 + uVar5 * -3);
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getViewPort();
  this = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
  aiStack_70[1] = cocos2d::CCEGLView::getScreenScaleFactor(this);
  cocos2d::CCSet::CCSet(aCStack_34);
  iVar4 = *param_1;
  *ppiVar3 = local_50;
  (**(code **)(iVar4 + 0x32c))(param_1,local_4c,0,local_5c);
  iVar4 = *param_1;
  *ppiVar3 = local_58;
  (**(code **)(iVar4 + 0x334))(param_1,local_60,0,local_5c);
  iVar4 = DAT_00158ee0;
  iVar6 = *param_1;
  *ppiVar3 = local_54;
  (**(code **)(iVar6 + 0x334))(param_1,local_64,0,local_5c);
  local_4c = 0;
  local_64 = piVar8;
  do {
    if (local_5c <= local_4c) {
      iVar4 = cocos2d::CCDirector::sharedDirector();
      piVar8 = (int *)cocos2d::CCEGLView::getDelegate(*(CCEGLView **)(iVar4 + 0x14));
      (**(code **)(*piVar8 + 4))(piVar8,aCStack_34,0);
      cocos2d::CCSet::~CCSet(aCStack_34);
LAB_00158ec6:
      if (local_1c != *local_64) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar9 = *local_50;
    local_50 = local_50 + 1;
    iVar6 = *(int *)(iVar9 * 4 + iVar4 + 0x158e36);
    if (iVar6 == 0) {
      cocos2d::CCSet::~CCSet(aCStack_34);
      goto LAB_00158ec6;
    }
    iVar1 = *local_58;
    local_58 = local_58 + 1;
    uVar2 = __subsf3(iVar1,local_44);
    local_60 = __divsf3(uVar2,aiStack_70[1]);
    iVar1 = *local_54;
    local_54 = local_54 + 1;
    uVar2 = __subsf3(iVar1,local_40);
    uVar2 = __divsf3(uVar2,aiStack_70[1]);
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(int *)(iVar6 + 0x28) = iVar9;
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar6 + 0x18);
    uVar7 = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0x1c) = uVar2;
    *(undefined4 *)(iVar6 + 0x24) = uVar7;
    *(undefined4 *)(iVar6 + 0x18) = local_60;
    cocos2d::CCSet::addObject((CCObject *)aCStack_34);
    local_4c = local_4c + 1;
  } while( true );
}


