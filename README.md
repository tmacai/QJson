# QJson

//Json字符串转Map
QVariantMap SendTaskSrv::stringJsonToQVariantMap(const QString &stringJson)
{
	bool ok;
	QJson::Parser parser;
	QVariantMap result = parser.parse(stringJson.toUtf8(), &ok).toMap();
	if (!ok) 
	{
		return QVariantMap();
	}

	return result;
}

//Map转Json字符串
QString SendTaskSrv::mapToStringJson(const QVariantMap &map)
{
	QJson::Serializer serializer;
	bool ok;
	QByteArray json = serializer.serialize(map, &ok);
	if(ok)
	{
		return QString(json);
	} 
	else 
	{
		return QString();
	}
}