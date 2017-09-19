#ifndef MANAGEDATAFROMURL_H
#define MANAGEDATAFROMURL_H

#include <QObject>
#include <QUrl>
#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

class ManageDataFromUrl : public QObject
{
    Q_OBJECT
public:
    explicit ManageDataFromUrl(QObject *parent = nullptr);
    void SendRequestToServer(const QUrl& url);
    void setDataReceivedFromServer(QString data);
    void handleDataReviceFromURL(QString m_data);
private:
    /**
     * @brief m_data: This is data receive from SERVER_URL
     */
    QString m_data;
    QStringList listId;
    QStringList listUrl;

signals:

public slots:
    void sendRequest(QUrl url);
};

#endif // MANAGEDATAFROMURL_H
