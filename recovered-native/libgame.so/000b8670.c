/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b8670  Symbol: ani_Bullet_Sound */

/* ani_Bullet_Sound(int) */

void ani_Bullet_Sound(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_000b86c8 + 0xb867a;
  piVar4 = *(int **)(iVar3 + DAT_000b86cc);
  if (**(int **)(iVar3 + DAT_000b86d0) < *piVar4) {
    return;
  }
  if (param_1 == 0x82) {
    if (*(char *)(**(int **)(iVar3 + DAT_000b86d4) + 1) == '\0') goto LAB_000b86c0;
    pcVar1 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar2 = (char)DAT_000b86d8 + -0x5a;
  }
  else {
    if ((param_1 != 0xa0) || (*(char *)(**(int **)(iVar3 + DAT_000b86d4) + 1) == '\0'))
    goto LAB_000b86c0;
    pcVar1 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar2 = (char)DAT_000b86dc + -0x44;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar1,(bool)cVar2);
LAB_000b86c0:
  *piVar4 = *piVar4 + 1;
  return;
}


