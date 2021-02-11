  // ToggleController

<% modeControllerInstances.forEach(element => {%>  <%=device.deviceInstance%>.onToggleState("<%=element%>", onToggleState);
<%});%>