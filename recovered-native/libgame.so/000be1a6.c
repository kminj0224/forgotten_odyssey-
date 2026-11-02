/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000be1a6  Symbol: FUN_000be1a6 */

undefined4 FUN_000be1a6(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int param_7;
  int param_8;
  int param_9;
  uint param_10;
  int param_11;
  int param_12;
  int param_13;
  void *param_14;
  undefined4 param_15;
  undefined4 param_16;
  undefined4 param_17;
  undefined4 param_18;
  
  uVar4 = *(uint *)(param_11 + 4);
  if (param_10 < uVar4) {
    FUN_000bd9d8();
  }
  iVar3 = 0;
  iVar2 = uVar4 * 4;
  for (; (int)uVar4 < 0x50; uVar4 = uVar4 + 1) {
    *(undefined4 *)(param_7 + iVar2 + iVar3) = 0;
    iVar3 = iVar3 + 4;
  }
  iVar2 = 0;
  do {
    iVar3 = param_7 + iVar2;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(iVar3 + 0x140) = 0;
  } while (iVar2 != 0x140);
  __floatsisf((param_12 - param_8) / 2);
  uVar5 = __floatsisf((param_13 - param_9) / 2);
  cocos2d::CCSize::CCSize((CCSize *)&stack0x00000094,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
  ;
  __floatsisf(param_8 / 2);
  uVar5 = __floatsisf(param_9 / 2);
  cocos2d::CCSize::CCSize((CCSize *)&stack0x0000009c,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
  ;
  uVar1 = __fixsfsi(param_15);
  *(undefined4 *)(param_7 + 0x284) = uVar1;
  uVar1 = __fixsfsi(param_16);
  *(undefined4 *)(param_7 + 0x280) = uVar1;
  uVar1 = __fixsfsi(param_17);
  *(undefined4 *)(param_7 + 0x288) = uVar1;
  uVar1 = __fixsfsi(param_18);
  *(undefined4 *)(param_7 + 0x28c) = uVar1;
  free(param_14);
  FUN_001edf58(&stack0x00000044);
  FUN_001ed6b8(&stack0x00000044);
  cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x000000a4);
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000c0);
  return 1;
}


