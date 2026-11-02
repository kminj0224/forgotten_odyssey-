/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00132cc0  Symbol: onEnter */

/* Ending_Layer::onEnter() */

void Ending_Layer::onEnter(void)

{
  bool bVar1;
  int *in_r0;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float in_s0;
  float in_s1;
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00132dc0 + 0x132ccc);
  local_1c = *piVar6;
  puVar5 = (undefined4 *)(DAT_00132dc4 + 0x132cd8);
  pcVar3 = *(code **)(*in_r0 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_44,in_s0,in_s1);
  (*pcVar3)(in_r0,aCStack_44);
  puVar5 = (undefined4 *)*puVar5;
  iVar4 = *in_r0;
  uVar2 = __divsf3(*puVar5,DAT_00132dc8);
  (**(code **)(iVar4 + 0x2c))(in_r0,uVar2);
  uVar2 = __divsf3(puVar5[1],DAT_00132dcc);
  (**(code **)(*in_r0 + 0x34))(in_r0,uVar2);
  vInitScript();
  in_r0[0x50] = -1;
  in_r0[0x4a] = -1;
  in_r0[0x4b] = -1;
  in_r0[0x4c] = -1;
  in_r0[0x4d] = -1;
  in_r0[0x4e] = -1;
  in_r0[0x4f] = -1;
  *(Ending_Layer *)(in_r0 + 0x51) = (Ending_Layer)0x0;
  iVar4 = DAT_00132dd0;
  in_r0[0x52] = 0;
  puVar5 = *(undefined4 **)(iVar4 + 0x132d3a);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[3] = 0xffffffff;
  puVar5[4] = 0xffffffff;
  puVar5[5] = 0xffffffff;
  puVar5[6] = 0xffffffff;
  puVar5[7] = 0xffffffff;
  puVar5[8] = 0xffffffff;
  puVar5[9] = 0xffffffff;
  puVar5[2] = 0xffffffff;
  (**(code **)(*in_r0 + 0x114))(in_r0,1);
  in_r0[0x53] = 0;
  puVar5 = *(undefined4 **)(DAT_00132dd4 + 0x132d64);
  *(undefined *)((int)puVar5 + DAT_00132dd8) = 0;
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  FileLode((Ending_Layer *)in_r0);
  memset(acStack_3c,0,0x1e);
  strcpy(acStack_3c,(char *)(DAT_00132ddc + 0x132d90));
  uVar2 = LoadScript(acStack_3c);
  *puVar5 = uVar2;
  vFindScriptPos();
  Story_Call((Ending_Layer *)in_r0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)in_r0);
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


