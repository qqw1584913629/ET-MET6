namespace ET
{
    public class LoginFinish_CreateLobbyUI: AEventAsync<EventType.LoginFinish>
    {
        protected override async ETTask Run(EventType.LoginFinish args)
        {
            args.ZoneScene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
            // args.ZoneScene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_RedDot);
            // await args.ZoneScene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_Helper);
            await args.ZoneScene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_Lobby);
        }
    }
}